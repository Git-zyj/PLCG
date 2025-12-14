/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225798
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned char) arr_5 [i_1] [i_1] [i_0]))) ? (((/* implicit */int) max((arr_5 [i_0] [i_1] [(short)13]), ((_Bool)1)))) : (((/* implicit */int) var_17)))), (max((((((((/* implicit */int) (short)-26504)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))), (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_20 &= ((/* implicit */int) (short)26486);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)128))))) : (((((/* implicit */_Bool) var_12)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124)))))))) ? ((-(((/* implicit */int) ((_Bool) arr_7 [(signed char)1] [i_2] [(signed char)1] [i_0]))))) : (((((/* implicit */_Bool) max((arr_4 [(unsigned short)10] [i_1]), (((/* implicit */int) arr_11 [i_3] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)101)) && (((/* implicit */_Bool) var_8))))) : (((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned char)105))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)90)) + (((/* implicit */int) (signed char)109))))))) >= (((long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_1] [7])) ? (((/* implicit */long long int) ((/* implicit */int) (short)25296))) : (-1LL))))));
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0])), (872732070))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((((/* implicit */long long int) -1359390668)), (((long long int) max((((/* implicit */short) (_Bool)1)), (var_1))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_25 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1) : (((/* implicit */int) (signed char)52))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-123)) / (((/* implicit */int) (unsigned char)205))))) : (-7LL)))));
                var_26 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4] [i_4]))));
                var_27 = ((/* implicit */int) (((!((((_Bool)1) || (((/* implicit */_Bool) 9397094719208861947ULL)))))) && (((/* implicit */_Bool) (signed char)112))));
                arr_19 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)206)) ? (-445524237) : (((/* implicit */int) (signed char)52))));
            }
        } 
    } 
}
