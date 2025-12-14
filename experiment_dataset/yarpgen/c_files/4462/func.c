/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4462
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
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_8 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 10535961589688508430ULL)) ? (749836639) : (((/* implicit */int) (short)127)))), (((int) -3714806217914457520LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)9677))))) : (7264440596394072214LL)));
                        arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) min((((short) min((-1619385362), (((/* implicit */int) (short)-1))))), (arr_4 [i_0])));
                    }
                    for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */int) (-(min((((/* implicit */long long int) arr_12 [i_0] [i_1 + 1])), (arr_5 [i_0] [i_4 + 2] [i_0] [i_4])))));
                        var_20 ^= ((/* implicit */long long int) (short)141);
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 8LL))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((9397747026742158388ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((5685488798694124481LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 11LL)) ? (arr_11 [i_1] [i_1] [i_1 + 1] [i_1]) : (((/* implicit */int) (_Bool)1))))))))));
                    var_23 -= ((/* implicit */unsigned short) arr_11 [i_2] [i_1] [i_0] [i_0]);
                }
                for (long long int i_5 = 4; i_5 < 23; i_5 += 4) 
                {
                    var_24 += ((/* implicit */long long int) ((((((arr_17 [i_5] [i_5] [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (short)29211))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1 + 1]))) : (-4785050717216937734LL))) >= (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)2208))))), ((-2147483647 - 1)))))));
                    arr_18 [i_0] [i_0] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)68))))) < (((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_5 - 2])) ? (arr_15 [i_0] [i_1 + 1]) : (arr_11 [i_1] [i_1 - 1] [i_1 + 2] [i_5 - 3]))));
                }
                arr_19 [i_0] [i_0] = ((/* implicit */long long int) max((min((14357732452703351807ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (short)32737))));
            }
        } 
    } 
}
