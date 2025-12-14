/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197908
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 10521078171696057240ULL)) && (((/* implicit */_Bool) (unsigned char)228)))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_18 = ((/* implicit */int) var_2);
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (unsigned char)93)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 14834472469599391295ULL)) ? (((((/* implicit */int) (unsigned short)15257)) * (((/* implicit */int) (unsigned char)143)))) : (((/* implicit */int) (unsigned char)113))))), (((long long int) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) (short)-6416))))))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_20 = arr_6 [i_0] [i_0] [i_0];
            arr_10 [i_0 - 4] = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned char)173))));
        }
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), ((((_Bool)1) ? (249087874U) : (((/* implicit */unsigned int) -248172682))))));
                    var_22 = ((/* implicit */unsigned char) max(((short)-6416), (((/* implicit */short) var_4))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */signed char) max((5681090021582185136LL), (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32764)))))));
    }
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        arr_20 [i_6] &= ((/* implicit */long long int) var_7);
        var_23 = ((/* implicit */short) max(((_Bool)1), ((!(((/* implicit */_Bool) var_3))))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_6] [i_6])), (min((var_2), (((/* implicit */unsigned long long int) (unsigned char)113))))))))))));
    }
    for (int i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) (unsigned char)177);
        arr_23 [i_7] = ((/* implicit */int) min((-3527338043041868670LL), (-900134239069184485LL)));
        var_26 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_7]))) % (((unsigned int) -7927587681322512405LL))))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) arr_1 [i_7])))));
    }
    var_27 |= ((/* implicit */unsigned int) var_6);
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) -9223372036854775804LL))))) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) (short)-20446))));
    var_29 = ((/* implicit */short) var_3);
}
