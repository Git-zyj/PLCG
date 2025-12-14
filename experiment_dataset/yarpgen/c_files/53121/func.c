/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53121
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)127))));
                            var_18 = ((/* implicit */unsigned char) var_8);
                            var_19 = ((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                            var_20 += ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) arr_3 [i_2])) && (((/* implicit */_Bool) var_13)))) || (((/* implicit */_Bool) ((unsigned short) arr_0 [i_3]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((575078313U) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) (short)24088))))) ? ((-(((/* implicit */int) (unsigned char)127)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)150)) : (var_9))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                            {
                                var_22 ^= ((/* implicit */signed char) ((unsigned short) ((signed char) arr_5 [i_4] [i_4])));
                                var_23 = (+(((/* implicit */int) (signed char)0)));
                                arr_18 [i_1] = ((/* implicit */_Bool) arr_1 [i_5 - 1]);
                                var_24 = ((/* implicit */unsigned char) ((int) arr_15 [i_0] [i_1] [i_0] [i_6] [i_6]));
                            }
                        }
                    } 
                } 
                arr_19 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((arr_7 [i_0] [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) -1970323713)) ? (var_9) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_11)))), (((((/* implicit */int) arr_7 [i_1] [i_1])) + (((/* implicit */int) arr_7 [i_1] [i_1]))))));
                arr_20 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */long long int) 1970323713))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_5)))) : (((/* implicit */int) var_3)))))));
                var_25 = ((/* implicit */_Bool) var_13);
            }
        } 
    } 
    var_26 = ((/* implicit */short) ((unsigned char) var_12));
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_14)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_13)), (var_7)))) ? (((((/* implicit */int) var_11)) << (((var_9) - (1511905527))))) : (((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)-1))))))) : (((long long int) max((var_11), (((/* implicit */unsigned short) var_16)))))));
}
