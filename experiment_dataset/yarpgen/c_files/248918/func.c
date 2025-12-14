/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248918
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
    var_19 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9611284096626011444ULL)) ? (8835459977083540166ULL) : (8835459977083540162ULL)));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1548953080)) ? (((/* implicit */unsigned long long int) 1548953079)) : (251475264847136874ULL)));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 326741647216832734LL)) ? (((/* implicit */unsigned long long int) -326741647216832734LL)) : (9611284096626011459ULL)));
                    }
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)31497);
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 9; i_5 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */short) 18446744073709551589ULL);
                                var_24 = ((/* implicit */long long int) (unsigned short)25396);
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */_Bool) (signed char)109);
                var_26 = ((/* implicit */unsigned char) (short)-14178);
            }
        } 
    } 
}
