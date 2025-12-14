/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217497
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
    var_14 = ((/* implicit */_Bool) min((((((int) (short)-28712)) - ((-(((/* implicit */int) var_8)))))), (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1120054403))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 8; i_2 += 4) 
                {
                    arr_7 [i_0 - 1] [i_1] = ((short) 1120054415);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 6; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 12345301141820182205ULL)) ? (((((/* implicit */_Bool) (short)1024)) ? (279275953455104ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) 5260694190705294158LL))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) 5260694190705294142LL)) ? (var_3) : (((/* implicit */unsigned long long int) -5260694190705294158LL)))) << (((((((/* implicit */_Bool) -4721206459425832424LL)) ? (((/* implicit */int) (short)-24)) : (((/* implicit */int) var_1)))) + (73)))))));
                        arr_12 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 1120054403)), (((((/* implicit */_Bool) ((int) (short)(-32767 - 1)))) ? (max((131071ULL), (((/* implicit */unsigned long long int) -1202547940)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (206927599))))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 6; i_4 += 4) /* same iter space */
                    {
                        arr_17 [i_1] = ((/* implicit */signed char) min((((/* implicit */short) ((signed char) -206927599))), (arr_0 [i_0 - 1])));
                        var_18 = ((/* implicit */_Bool) 2097151);
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 6; i_5 += 4) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_1] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (-9223372036854775786LL)))) ? ((+(((/* implicit */int) (short)32767)))) : (var_0)))) ? (((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned short)12940)))))) : (((/* implicit */int) max(((short)32753), ((short)-32761))))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) (short)32760))))) ? ((((!(var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32761))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) var_3))))))) : ((+(min((3), (((/* implicit */int) (unsigned char)40))))))));
                        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (((((/* implicit */_Bool) (((_Bool)0) ? (524256) : (524256)))) ? (max((((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_5 + 2])), (-9))) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)0))))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_6 = 4; i_6 < 18; i_6 += 4) 
    {
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned short) ((-5260694190705294158LL) | (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        var_21 = ((/* implicit */unsigned short) 279275953455104ULL);
        var_22 -= ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (short)-29693)))));
    }
}
