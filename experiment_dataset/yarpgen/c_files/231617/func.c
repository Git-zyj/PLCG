/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231617
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
    var_12 = ((/* implicit */_Bool) ((3165487914U) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-8111)), (arr_9 [i_1 - 1] [i_1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((unsigned long long int) max((arr_6 [i_0]), (arr_6 [i_0]))))));
                    var_15 ^= ((_Bool) -2754059774992130970LL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [(unsigned char)18] [i_1] [i_2] [i_0] [6U] = ((/* implicit */short) (~(arr_5 [i_0 - 2] [i_0] [i_2])));
                                arr_17 [13] [i_1 - 1] [(unsigned short)19] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((3165487911U), (((/* implicit */unsigned int) var_1)))), ((+(1129479384U)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (0U)))) ? (min((((/* implicit */unsigned long long int) 1129479382U)), (18446744073709551599ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [(short)14] [6] [i_3] [i_4 - 1])))))))))));
                                arr_18 [i_2] [i_1] &= ((/* implicit */unsigned char) arr_2 [i_2] [i_2]);
                                arr_19 [i_1 - 1] [i_0] [3LL] [i_3] = ((/* implicit */short) ((unsigned long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (arr_4 [i_0]))), (((((/* implicit */_Bool) 8046934371245020394ULL)) ? (8046934371245020394ULL) : (arr_7 [i_4 - 1] [i_2] [i_1] [i_0 + 1]))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(10399809702464531221ULL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (3165487911U)))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) / ((-(10399809702464531221ULL)))))) ? (11183935373367232349ULL) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_1)))) - ((~(1723204318))))))));
}
