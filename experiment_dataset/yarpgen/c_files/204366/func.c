/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204366
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
    for (int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_1 + 2] [6LL])) ? (0U) : (var_5))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 4853872976644777007ULL))))));
                var_16 += ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)27487)) + (-1648627330)))) : (4294967273U)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_17 += ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 30U)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((8771372733048454230ULL) - (8771372733048454217ULL)))))) : (min((((/* implicit */unsigned int) var_0)), (4294967273U)))))), (((long long int) min((((/* implicit */long long int) (short)-10072)), (arr_13 [i_4] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0]))))));
                                var_18 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((6U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((2412681487U) >= (((/* implicit */unsigned int) -593121939)))))))) / (min((-28LL), (((/* implicit */long long int) max((arr_1 [i_0 - 2]), (((/* implicit */int) (short)27500)))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (var_14)));
                var_20 -= ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_1 + 1] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_5) : (4294967281U)))) ? (((((/* implicit */_Bool) 9U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (4294967289U)))))) >> (((max((((/* implicit */unsigned int) ((_Bool) 262143))), (((((/* implicit */_Bool) var_8)) ? (3758096384U) : (var_5))))) - (3758096349U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 4; i_5 < 24; i_5 += 3) 
    {
        for (long long int i_6 = 1; i_6 < 22; i_6 += 4) 
        {
            {
                var_22 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)145))));
                var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) 4294967273U)), (15535289879074255166ULL)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            {
                var_24 &= ((/* implicit */unsigned char) ((13592871097064774609ULL) << (28LL)));
                arr_29 [7U] [3U] |= ((/* implicit */int) arr_15 [i_7] [i_7] [12LL] [i_8] [i_8 + 1] [i_8 + 1]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        for (signed char i_10 = 1; i_10 < 18; i_10 += 3) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    var_25 &= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)764))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (short)-27487))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max((((((10824980104462331292ULL) + (((/* implicit */unsigned long long int) var_11)))) + (((/* implicit */unsigned long long int) ((long long int) 192570666U))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_9] [i_9] [i_10 - 1] [i_10] [i_9] [i_9])))))) <= (max((var_4), (((/* implicit */long long int) (unsigned short)764))))))))))));
                }
            } 
        } 
    } 
}
