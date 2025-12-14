/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203383
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) (unsigned char)61)) <= (((/* implicit */int) (_Bool)0)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (+(var_19)))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (short)14119)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */long long int) ((((((-4030982423243155029LL) - (14LL))) ^ ((+(8413421418624836115LL))))) > (4030982423243155026LL)));
                                var_22 -= ((/* implicit */unsigned int) arr_0 [i_0 - 3]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((-4030982423243155029LL) | (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (signed char)76)), (var_3)))))))))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */long long int) (+((~(((((/* implicit */_Bool) 2930407750U)) ? (((/* implicit */int) (short)20933)) : (((/* implicit */int) (unsigned short)52179))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_24 = ((/* implicit */_Bool) arr_18 [i_0] [i_5]);
            var_25 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)5470))));
        }
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)5)) | (((/* implicit */int) (unsigned short)60073))));
            var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_7 + 1]))));
        }
        var_28 &= ((/* implicit */unsigned char) (-((+(var_16)))));
    }
    var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (1221634113)));
}
