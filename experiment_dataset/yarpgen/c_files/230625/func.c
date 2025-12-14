/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230625
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
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_5)), (14944892843854201162ULL))), (14944892843854201162ULL))))));
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)5)), (3501851229855350453ULL)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((unsigned long long int) 14944892843854201162ULL));
                    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((arr_10 [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_1]), (arr_10 [i_0 + 1] [i_0 + 2] [i_2] [i_2])))), (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 + 1]) : (4294967290U)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_13 [(signed char)14] [(signed char)14] [(_Bool)1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [(signed char)14])) | ((-(arr_12 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2])))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((14944892843854201164ULL) * (arr_12 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0])))) ? (min((arr_12 [i_0] [i_0 + 3] [i_0] [(unsigned short)0]), (((/* implicit */unsigned long long int) arr_7 [i_3 + 1] [(signed char)13] [i_0 + 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2]))))))));
                                var_22 = ((/* implicit */signed char) max((((/* implicit */int) ((11U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned char)3))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) ((_Bool) 4294967284U)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) arr_7 [(unsigned short)11] [i_1] [(_Bool)1]);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (+(6641795329152833974ULL)));
}
