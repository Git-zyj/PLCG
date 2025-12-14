/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225303
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
    var_19 = (-(((((/* implicit */_Bool) min((var_0), (((/* implicit */signed char) var_16))))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))) : (min((((((/* implicit */_Bool) -503582360)) ? (((/* implicit */int) (short)-8891)) : (((/* implicit */int) (unsigned char)214)))), ((~(((/* implicit */int) var_14))))))));
                                arr_12 [i_0] [(unsigned short)5] [i_0] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) min(((~(arr_1 [i_0]))), (((/* implicit */int) arr_8 [i_3]))));
                                arr_13 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_2 - 2] [i_0] [i_1] = ((/* implicit */unsigned short) (+(min((arr_1 [i_0]), (min((((/* implicit */int) arr_8 [i_0])), (arr_7 [i_4] [i_3] [(_Bool)1] [i_0] [(_Bool)1] [i_0])))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_0]);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] [i_2 - 1] = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2147483647U))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_2 - 1])))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (((arr_4 [i_2] [i_1] [i_2 - 1]) & (arr_4 [i_1] [i_0] [i_2 - 1]))))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((arr_0 [i_1] [i_0]) << (((arr_4 [i_5] [i_5] [i_6]) - (8939735219590524429ULL)))))) ? (arr_0 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_16 [i_0] [i_0] [i_1] [i_6]))))))))))));
                            arr_22 [i_0] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [21U])) ? (var_10) : (arr_7 [i_0] [i_0] [i_5] [(signed char)7] [i_0] [i_5]))))))));
                            arr_23 [i_0] = ((/* implicit */short) arr_10 [i_0] [i_0] [i_6]);
                        }
                    } 
                } 
            }
        } 
    } 
}
