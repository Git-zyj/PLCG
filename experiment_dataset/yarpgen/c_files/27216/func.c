/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27216
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((10302847316338518422ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)3861)) / (((/* implicit */int) (short)-10867)))))))));
                arr_4 [i_0] = ((((/* implicit */long long int) min((((((/* implicit */int) var_12)) << (((var_13) + (5092751225193648064LL))))), (arr_1 [i_0 + 2])))) - (max((((/* implicit */long long int) arr_2 [i_0 + 2])), (-4488416334013114397LL))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) ((((var_11) == (((/* implicit */long long int) ((((/* implicit */_Bool) -602922478)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (short)3861))))))) ? ((-(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0 + 3]))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16))))) || (((/* implicit */_Bool) max((899974466), (((/* implicit */int) (short)-13787))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [22LL] [(signed char)12] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_2])) : (((/* implicit */int) (short)-3871))))))))) : (((3527775953995787650ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_11 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */long long int) var_16)), (var_11))));
                                arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)4))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                {
                    arr_15 [i_5] [(signed char)9] [i_5] [i_0 + 3] = ((/* implicit */int) var_8);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 1; i_7 < 24; i_7 += 1) 
                        {
                            arr_23 [i_1] [i_7] [(signed char)0] [i_7] [i_7 + 1] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3527775953995787657ULL)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (short)-14354)))))));
                            arr_24 [i_7 - 1] [i_5] [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) ((_Bool) ((short) 1251185074189130111LL)));
                        }
                        arr_25 [i_0 + 2] [i_0 + 2] [i_5] [i_0 + 2] = ((/* implicit */unsigned long long int) (short)8670);
                        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)31385))));
                        arr_26 [(_Bool)1] [i_5] [(_Bool)1] [i_6] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)126)))) ? ((+(var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [4ULL] [4ULL] [i_0 + 2] [i_0 + 2])))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        for (unsigned short i_9 = 2; i_9 < 11; i_9 += 2) 
        {
            {
                var_22 = -1251185074189130111LL;
                arr_33 [11LL] [i_8] &= ((/* implicit */signed char) ((int) (short)-10867));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((var_12) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 262143)) != (-1251185074189130112LL))))) == (var_0)))) : ((+(((/* implicit */int) var_1))))));
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((var_12) ? ((~(((((/* implicit */_Bool) 2097024ULL)) ? (-8669056261395282820LL) : (-6115878219291213333LL))))) : (((((((-463433528652883324LL) | (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))))))));
}
