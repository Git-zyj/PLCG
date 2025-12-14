/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51080
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
    var_14 = ((/* implicit */unsigned long long int) (~((~((~(-656452222)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) min((var_7), ((+(((((/* implicit */_Bool) (signed char)127)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_4))))))));
        var_16 -= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-9240)))))));
        var_17 = 0ULL;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        for (short i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_3] [i_1] [(unsigned short)8] [(unsigned short)9] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) -466154586)))))));
                                var_18 += ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((-2012325440) <= (268369920)))), ((unsigned char)98)))) && (((((/* implicit */int) var_12)) <= (268369920)))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(0))))));
                /* LoopSeq 1 */
                for (int i_6 = 1; i_6 < 8; i_6 += 4) 
                {
                    arr_18 [i_1] [8] [i_1] [i_1] = ((/* implicit */short) ((unsigned long long int) var_7));
                    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [4] [4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) || ((!(((/* implicit */_Bool) 806718296))))))) & (min(((+(((/* implicit */int) (short)-1009)))), (((/* implicit */int) var_2))))));
                    var_21 = ((/* implicit */int) var_9);
                }
                var_22 -= ((/* implicit */signed char) ((long long int) max((-1911091970), (((/* implicit */int) (unsigned char)98)))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (signed char)56)))))));
}
