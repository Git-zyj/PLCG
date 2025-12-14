/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28576
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1789516627U)) ? (2505450669U) : (262143U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (~(var_5)));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) -1075748122);
                                arr_13 [i_0] [i_0] [i_0] [i_2] [(_Bool)1] [i_4] [i_4] = ((/* implicit */_Bool) 1948558535587104053ULL);
                                arr_14 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_8 [i_0] [i_0] [5LL])) * (((/* implicit */int) arr_8 [i_4] [i_4] [i_4])))))))));
                                var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1789516634U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) == ((~(arr_10 [i_4] [i_0]))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1789516631U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (507904U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) (!(arr_8 [i_0] [(unsigned short)7] [i_1])))))))));
                var_17 = ((/* implicit */long long int) ((min((arr_12 [i_0] [i_0] [i_0]), (arr_12 [i_1] [i_0] [i_0]))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_12 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_6);
}
