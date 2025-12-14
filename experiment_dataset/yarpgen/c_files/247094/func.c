/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247094
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
    var_12 = ((((((/* implicit */_Bool) 3930209912U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 10794414602504694040ULL)))) : (var_1))) >= (max((((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_9))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (9223372036854775795LL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (max(((+(2057085267024540116ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -634825749)) && (((/* implicit */_Bool) 3940988469U)))))))))));
                    var_14 -= var_6;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) var_8);
                        var_16 += ((/* implicit */unsigned long long int) (!(var_0)));
                        var_17 = ((/* implicit */unsigned long long int) (signed char)-23);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 2; i_4 < 10; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) (-(var_7)));
                        var_19 = ((/* implicit */unsigned char) ((var_1) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)14893)))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (unsigned short)23864))));
        var_22 = ((/* implicit */unsigned long long int) max((1851315928), ((-(((/* implicit */int) (unsigned short)41676))))));
        var_23 = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 1 */
        for (short i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1851315928)) || (((/* implicit */_Bool) ((arr_5 [i_5 + 1] [i_7 + 1] [i_6]) + (arr_5 [i_5 - 1] [i_7 + 1] [i_6])))))))));
                        var_25 ^= ((/* implicit */unsigned char) (-(var_7)));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)59), ((unsigned char)30)))) ? (min((0ULL), (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_10))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)199)))) || (((/* implicit */_Bool) var_7)))))) : (max((min((var_6), (((/* implicit */unsigned int) var_3)))), (1746357971U))))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (13641440690237263188ULL)));
        }
    }
}
