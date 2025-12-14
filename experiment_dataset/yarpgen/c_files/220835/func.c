/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220835
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) min((arr_4 [i_1] [i_1] [i_0]), (((/* implicit */short) var_1))))), (min((1133241518U), (((/* implicit */unsigned int) (short)-6584))))))));
                    arr_9 [i_0] [i_1] [i_0] &= ((/* implicit */short) max((min((((((/* implicit */int) (short)-24426)) + (((/* implicit */int) var_7)))), (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (short)-24426))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) max((((/* implicit */int) (signed char)-112)), (1208722982)));
    /* LoopSeq 2 */
    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
    {
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_5 [i_3 - 1]))) >> (((((/* implicit */int) max((((short) var_8)), (max(((short)31551), (var_10)))))) - (31543)))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            var_16 -= ((/* implicit */unsigned char) max(((-(((/* implicit */int) (short)28962)))), (((/* implicit */int) (unsigned char)7))));
            arr_15 [i_4 - 1] = ((/* implicit */short) var_3);
            var_17 *= ((((((((/* implicit */int) (short)-28970)) <= (((/* implicit */int) (short)-24450)))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) arr_4 [i_3] [i_4] [i_4])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)12500))))));
        }
        for (unsigned char i_5 = 1; i_5 < 7; i_5 += 2) 
        {
            arr_18 [i_5] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-24426)))))))) ^ (min((min((1820568238), (((/* implicit */int) (signed char)-97)))), (((/* implicit */int) ((signed char) arr_0 [i_3])))))));
            var_18 *= ((/* implicit */short) (~(((/* implicit */int) max(((short)6593), (((/* implicit */short) (unsigned char)212)))))));
            arr_19 [i_3] [i_5] = ((/* implicit */long long int) -1);
        }
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 12; i_6 += 4) 
    {
        arr_22 [i_6] &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_20 [i_6] [i_6 + 4])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-12478))))) : (arr_20 [i_6 - 1] [i_6 + 2])));
        var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)28942)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-24424))))));
    }
    var_20 = ((/* implicit */_Bool) ((unsigned char) var_6));
    var_21 &= min((1727000258), (((/* implicit */int) (_Bool)1)));
}
