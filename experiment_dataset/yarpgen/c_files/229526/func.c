/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229526
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
    for (signed char i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((signed char) ((arr_5 [i_0 - 1] [i_0 + 2] [i_0 - 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 18446744073709551601ULL)))))));
                            arr_12 [i_0] [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 4] [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_0 [i_0 - 4]))))));
                            var_10 = ((/* implicit */long long int) max((var_4), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)54801)))))));
                        }
                    } 
                } 
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0 + 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_7)))))))) || (((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    arr_15 [i_0] = ((/* implicit */unsigned char) (!(arr_8 [i_0 - 4] [i_4] [i_0 - 3])));
                    arr_16 [13U] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_0] [i_1] [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [18LL] [i_1] [i_1] [i_1] [i_4]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2])))));
                    arr_17 [i_0] [i_1] [i_4] [2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-12855)) | (586721846)))) > (((((/* implicit */_Bool) -670852000)) ? (arr_5 [i_4] [i_4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))), (var_5)));
                    arr_18 [i_0] [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned short) (((-(var_5))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0 + 2]), (var_9)))))));
                }
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((long long int) 10914105963242064744ULL));
    var_13 &= ((((/* implicit */int) (unsigned char)85)) <= (((/* implicit */int) ((_Bool) var_2))));
    var_14 = ((/* implicit */int) ((unsigned long long int) 436350582566433554LL));
}
