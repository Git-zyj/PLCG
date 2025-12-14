/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23528
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
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 ^= ((/* implicit */long long int) 11642217097012066905ULL);
                arr_7 [(unsigned char)1] |= ((/* implicit */signed char) (unsigned short)511);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_14 [i_3] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (((_Bool)0) && (((/* implicit */_Bool) 1187585980369977173LL))));
                            arr_15 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((4260607557632ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64597)))))) && (((/* implicit */_Bool) ((1082472006U) + (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (-689413517)))))))));
                        }
                    } 
                } 
                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned short) 18446739813101993983ULL))) / (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (unsigned char)0))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    arr_19 [i_4] = ((/* implicit */unsigned int) (unsigned short)939);
                    arr_20 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)41)) ? (((((/* implicit */_Bool) -6310606266138492122LL)) ? (3189192354U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) >> (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14091344623722597483ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2781436316U)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned char)41))))) : (((2781436299U) + (982867957U)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 10; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)939))) : (0U)))) ? (((/* implicit */int) (unsigned short)29)) : (((((/* implicit */int) (unsigned short)18304)) ^ (((/* implicit */int) (signed char)-83)))))) >= (((/* implicit */int) ((_Bool) (unsigned char)255)))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-83)))) != (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (4355399449986954120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (unsigned char)2);
    var_24 = ((/* implicit */long long int) ((signed char) ((var_18) == (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)5074)) : (((/* implicit */int) (unsigned short)931))))))));
}
