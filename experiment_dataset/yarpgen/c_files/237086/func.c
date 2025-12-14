/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237086
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) arr_4 [(unsigned short)1])) == (((/* implicit */int) (unsigned short)12708))))) > (((/* implicit */int) arr_6 [i_1] [i_1] [i_2 + 1])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])))) : ((-(((/* implicit */int) (_Bool)1))))));
                    arr_9 [i_0] = min(((+(var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_1 [i_2]))))) ? (((/* implicit */int) arr_5 [4] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_1] [i_0]))))));
                    arr_10 [(short)10] [i_2] = ((/* implicit */int) ((((long long int) (unsigned short)12708)) < (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (unsigned short)55651)) & ((-2147483647 - 1)))))))));
                    arr_11 [i_0] = ((/* implicit */short) (~(((((/* implicit */int) (unsigned short)55651)) & (((((/* implicit */int) (unsigned short)12708)) & (((/* implicit */int) (unsigned short)52817))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_16 [i_4] [i_4] [i_3] [i_2 - 1] [i_1] [i_0] [11U] = ((((/* implicit */_Bool) arr_0 [i_4])) ? ((-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)0])) : (var_5))))) : (((arr_1 [i_3]) ? ((~(((/* implicit */int) arr_2 [(unsigned char)9])))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_4])) > (var_3)))))));
                            arr_17 [i_2] [i_2] = ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) arr_14 [i_4] [(signed char)0])) : (((/* implicit */int) ((signed char) arr_7 [i_0] [i_3 + 1] [(unsigned char)5] [i_3]))));
                        }
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_3] [(short)10] = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) ((607895954U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9884)))))), (arr_6 [i_3] [i_0] [i_0]))))));
                            arr_21 [i_5] [i_1] [i_2 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                            arr_22 [i_0] [i_1] [i_2] [i_2 - 1] [i_5] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((unsigned int) var_2)))) || (((/* implicit */_Bool) ((unsigned int) (unsigned short)52801)))));
                        }
                        arr_23 [i_0] [i_0] [i_1] [(unsigned short)11] [i_2] [i_3 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_1))) < (((int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (unsigned char)54)))))));
                        arr_24 [i_0] [i_1] [i_2] [i_3 + 2] [i_0] [i_3 + 2] = ((/* implicit */int) (_Bool)1);
                    }
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((long long int) var_8));
}
