/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210266
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
    var_14 = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (421526289)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57435))) | (17244968254734969221ULL))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-28))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (short)6825))))) : ((+(8142605063150071584ULL)))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (-(((((((/* implicit */long long int) ((/* implicit */int) (short)-31885))) & (7927911091255184422LL))) / (-7927911091255184423LL)))));
                        arr_11 [(short)8] [(short)8] [i_1] [i_2] [i_3] &= ((/* implicit */short) max((((/* implicit */unsigned int) (signed char)-28)), (0U)));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((min((2147483647), (((/* implicit */int) (signed char)-27)))) > (((/* implicit */int) ((((/* implicit */_Bool) 8975843439179246611ULL)) || (((/* implicit */_Bool) (signed char)34))))));
                            var_16 = ((/* implicit */_Bool) (signed char)56);
                        }
                        arr_16 [i_0] [(unsigned short)10] [i_0] [i_0] = ((/* implicit */short) ((min((arr_13 [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 2] [i_1]), (arr_13 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1 - 1] [(short)0] [6U] [i_0] [i_0]))))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)1004)) >= (((/* implicit */int) var_0))));
}
