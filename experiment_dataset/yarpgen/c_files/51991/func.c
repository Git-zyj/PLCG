/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51991
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
    var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)73))));
    var_12 = ((/* implicit */unsigned short) (signed char)69);
    var_13 = ((/* implicit */long long int) (signed char)28);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */_Bool) 972827877);
            arr_5 [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)33))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */long long int) arr_1 [i_4] [i_1]);
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (signed char)-85))));
                            arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (_Bool)1))))));
                            var_15 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
            } 
        }
        arr_15 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (short)(-32767 - 1)))));
        arr_16 [(signed char)8] &= ((/* implicit */unsigned int) (signed char)-84);
    }
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_20 [0U] |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)-84)) ? (-7198216221110786059LL) : (((/* implicit */long long int) (-(-1519923288))))))));
        var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) -458231119)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) (signed char)-2)) : (1519923287)))) : ((~(9649860723114492598ULL)))))));
    }
}
