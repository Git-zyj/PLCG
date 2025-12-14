/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241306
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
    var_14 = ((/* implicit */unsigned int) ((unsigned long long int) var_2));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((arr_0 [i_0] [i_1]), (((/* implicit */short) (unsigned char)0))))) : (((/* implicit */int) min((((/* implicit */signed char) var_7)), (arr_1 [(signed char)8] [8])))))) : (((int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                var_16 ^= ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) arr_4 [i_0] [(unsigned char)18])))), (((/* implicit */unsigned long long int) ((int) var_13)))));
                var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                var_18 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)200)) ? (((((/* implicit */_Bool) var_11)) ? (-1392742645) : (((/* implicit */int) arr_1 [i_2] [i_3])))) : ((+(((/* implicit */int) var_11)))))), ((+(((arr_10 [i_2] [i_2] [i_3]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_3] [(signed char)8]))))))));
                var_19 = ((/* implicit */unsigned int) var_0);
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) ((int) min(((-(((/* implicit */int) arr_1 [i_4] [i_3])))), ((~(((/* implicit */int) arr_5 [i_4])))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_3] [i_4] [i_3] [i_4] = ((unsigned char) min((((/* implicit */int) ((signed char) var_11))), (-1392742645)));
                                arr_19 [i_4] [i_4] = ((/* implicit */signed char) ((((int) arr_0 [i_2] [i_2])) / (((/* implicit */int) arr_0 [i_4] [(signed char)3]))));
                                var_21 = ((((/* implicit */_Bool) ((var_2) ? (((((/* implicit */_Bool) arr_6 [i_2] [(unsigned char)5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) (+((+(var_1)))))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                {
                    var_22 -= (~((-(((/* implicit */int) arr_0 [i_3] [i_7])))));
                    var_23 = ((/* implicit */unsigned short) min((((int) ((int) (unsigned char)24))), (((/* implicit */int) max((((unsigned short) var_9)), (((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_2] [(signed char)9] [i_7])) > (((/* implicit */int) arr_12 [i_2] [i_2] [i_2]))))))))));
                    var_24 *= (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) ^ (var_1)))));
                    var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | ((-(((/* implicit */int) var_13))))))) ? ((-((~(((/* implicit */int) arr_2 [(signed char)17] [i_2] [(signed char)17])))))) : (((int) ((var_7) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_21 [4LL] [i_3] [i_7])))))));
                }
            }
        } 
    } 
    var_26 = (unsigned char)0;
}
