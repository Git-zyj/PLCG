/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24750
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
        var_14 = (((!(((/* implicit */_Bool) -285411190)))) ? (((var_11) ? (((/* implicit */int) arr_0 [(unsigned short)3])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) -784553089)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)40)))));
        arr_5 [i_0] = ((-4672504095466787345LL) + (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) % (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_8 [i_1] [13LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((-476219363), (arr_7 [i_1])))))) ? (-4672504095466787345LL) : (((((/* implicit */_Bool) min((arr_7 [i_1]), (((/* implicit */int) var_3))))) ? (4672504095466787344LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_5) : (((/* implicit */int) var_1)))))))));
        arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((134184960) & (-373934924))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))));
    }
    for (unsigned char i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((arr_10 [i_2 - 2] [i_2 - 2]) != (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-21033)), (var_12)))) ? (arr_11 [i_2 - 2]) : (((long long int) (short)21056)))))))));
        arr_12 [i_2] [i_2] = ((/* implicit */long long int) max(((short)-21048), (((/* implicit */short) (_Bool)1))));
    }
    var_16 = ((_Bool) (short)9272);
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(134184960)))) ? (min((((/* implicit */long long int) (unsigned char)236)), (arr_13 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-20), (((/* implicit */signed char) (_Bool)0))))))))) ? (min(((~(((/* implicit */int) (unsigned char)184)))), (((/* implicit */int) ((short) arr_13 [i_3]))))) : (((/* implicit */int) ((max((15639156102079218721ULL), (((/* implicit */unsigned long long int) var_0)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
        /* LoopNest 2 */
        for (short i_4 = 3; i_4 < 17; i_4 += 2) 
        {
            for (long long int i_5 = 3; i_5 < 18; i_5 += 4) 
            {
                {
                    arr_23 [13] [i_4] [i_3] = ((/* implicit */short) (+(((/* implicit */int) max((max((var_9), ((signed char)-50))), (arr_22 [i_5 + 1] [i_4 + 3] [i_4 + 2] [i_4 - 3]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (short)-21044);
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) (!((_Bool)0)))) : (((int) max((((/* implicit */unsigned long long int) (_Bool)1)), (8465549498039407209ULL))))));
                            var_20 += ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned char) (short)-21057))) ? (((var_8) ? (18014398509481983ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4095))) & (arr_27 [i_3] [19LL] [i_5 - 2] [i_6] [i_7]))))), (((/* implicit */unsigned long long int) ((long long int) min((arr_20 [i_7] [i_4 + 3] [(signed char)5]), (((/* implicit */int) (short)22826))))))));
                        }
                    }
                }
            } 
        } 
        var_21 ^= ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)255)), (-1564909252070413787LL)));
        arr_28 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((short) (~(((/* implicit */int) var_2))))));
        arr_29 [i_3] = ((/* implicit */short) (~(((arr_20 [i_3] [i_3] [i_3]) / (((/* implicit */int) (signed char)50))))));
    }
}
