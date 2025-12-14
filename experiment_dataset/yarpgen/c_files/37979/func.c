/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37979
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)1984))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_15);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1985)) || (var_7)));
        var_18 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0 - 1] [i_0])))) % (var_13)));
    }
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (unsigned char)22))))) : (((/* implicit */int) min(((unsigned char)103), ((unsigned char)251)))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((17686419872541894629ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)4064)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))))))));
            arr_9 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_16)), (min(((unsigned short)46952), (((/* implicit */unsigned short) (signed char)-40))))));
            arr_10 [i_1] [i_2] = ((/* implicit */int) (unsigned char)233);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) var_15);
            var_21 -= ((/* implicit */_Bool) ((int) (+(((long long int) var_5)))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((short) (-(((long long int) (short)-32752))))))));
            var_23 = ((/* implicit */long long int) max((var_23), (70368744177663LL)));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) max((min((358882602U), (((/* implicit */unsigned int) arr_13 [i_1])))), (((/* implicit */unsigned int) ((_Bool) arr_13 [i_1]))))))));
        }
        arr_16 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) min(((unsigned short)29784), (var_12)))), (max((11ULL), (((/* implicit */unsigned long long int) var_14))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_25 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_7)), (min((arr_19 [i_1 - 1]), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
                    arr_23 [i_4] [i_4] = max((((/* implicit */unsigned char) ((signed char) (short)-21043))), ((unsigned char)29));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (unsigned short)31169)))))) && (((/* implicit */_Bool) var_12))));
    var_27 = ((/* implicit */unsigned short) var_14);
    var_28 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)123)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) -6582935039992331710LL))));
}
