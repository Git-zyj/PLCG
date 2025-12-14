/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43406
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
    var_11 -= ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) (short)-28882))) : (((/* implicit */int) var_9)))) - (((/* implicit */int) (((~(((/* implicit */int) var_0)))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))));
    var_12 = ((/* implicit */short) ((long long int) var_9));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) var_1);
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (arr_0 [i_0]) : (((/* implicit */int) (short)14942))))) ? (max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (short)32767)))))) : (((((int) var_7)) + (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)123)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_14 += ((/* implicit */unsigned char) var_9);
                    arr_9 [(unsigned short)21] [i_2] = ((((/* implicit */_Bool) (short)14944)) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (((/* implicit */int) (unsigned short)55033)));
                }
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_15 = min((((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) min(((unsigned short)33111), ((unsigned short)55038))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1] [i_3])) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)10490)) : (((/* implicit */int) (unsigned char)255)))) : (min((arr_0 [i_0]), (((/* implicit */int) (_Bool)1)))))));
                    arr_13 [i_0] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) max(((unsigned short)10490), ((unsigned short)52536)))) : (((/* implicit */int) var_7))))) | ((~(min((((/* implicit */unsigned int) var_0)), (var_2)))))));
                    var_16 = ((((/* implicit */int) arr_5 [i_1] [i_3])) - (((/* implicit */int) arr_8 [i_0])));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3] [i_3])))))))));
                }
            }
        } 
    } 
}
