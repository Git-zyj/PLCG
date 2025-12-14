/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220236
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_19 |= min(((short)(-32767 - 1)), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) <= (372321413U))))) != ((+(18446744073709551615ULL)))))));
                            var_20 *= (-(max((5ULL), (((/* implicit */unsigned long long int) (unsigned char)58)))));
                            arr_14 [i_1] = ((/* implicit */short) -604180257054049890LL);
                            arr_15 [i_1] = ((/* implicit */short) ((((14ULL) > (18446744073709551614ULL))) ? (((((((/* implicit */_Bool) -6150345132990117863LL)) ? (18446744073709551610ULL) : (18ULL))) - (((/* implicit */unsigned long long int) (+(-9223372036854775780LL)))))) : (((((/* implicit */_Bool) -612004335335846948LL)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+((-((-(18446744073709551601ULL)))))));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned char) (short)-32759);
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            {
                arr_24 [i_4] [i_5] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32759)) ? (11271005465208774686ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12)))))) ? (max((18446744073709551586ULL), (15509120547435281643ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3344938104314655820LL)))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-20330)), ((-(((/* implicit */int) (short)32759)))))))));
                arr_25 [(short)13] [4LL] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(3344938104314655820LL)))) ? (((/* implicit */int) ((18446744073709551598ULL) > (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-976281799))))))) : ((+((+(((/* implicit */int) (signed char)15))))))));
                arr_26 [(unsigned short)6] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 18446744073709551573ULL)) || (((/* implicit */_Bool) (unsigned char)198)))) ? ((-(18446744073709551591ULL))) : (((/* implicit */unsigned long long int) (-(-9223372036854775795LL))))));
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    var_22 ^= ((/* implicit */short) (+(min((((((/* implicit */int) (unsigned char)47)) >> (((1901277833) - (1901277824))))), (((/* implicit */int) (unsigned char)208))))));
                    var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41576))) : (66ULL)))) ? (max((6555477404237724082LL), (((/* implicit */long long int) (short)(-32767 - 1))))) : (((((/* implicit */_Bool) (unsigned char)21)) ? (9207518117987073704LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_17);
    var_25 *= ((/* implicit */_Bool) var_12);
}
