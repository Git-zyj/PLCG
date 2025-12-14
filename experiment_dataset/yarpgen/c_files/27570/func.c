/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27570
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) (unsigned short)1323);
        arr_2 [i_0] = ((/* implicit */unsigned int) var_7);
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)187))))), (var_11)));
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((((int) var_1)) << (((/* implicit */int) ((short) (signed char)0)))));
        arr_6 [i_1] = ((unsigned char) max((((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (signed char)112))));
        var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (signed char)22)))), (((((/* implicit */_Bool) 9223372036854775794LL)) ? (var_4) : (((/* implicit */int) (short)19076))))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */int) (unsigned short)0);
        arr_10 [i_2] = ((/* implicit */signed char) (unsigned short)20);
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2147483647) - (((/* implicit */int) (signed char)19))))) ? (((unsigned int) (signed char)26)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)26)) ? (1386275424) : (((/* implicit */int) (signed char)-36)))))));
    }
    var_23 -= ((/* implicit */unsigned char) ((_Bool) ((var_10) * (((((/* implicit */int) (unsigned short)64070)) / (536870911))))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (int i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned short)768)), (((unsigned int) -1965604768))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-1)))) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (short)32506)))))));
                                arr_26 [i_3] [i_3] [i_4 - 2] [i_3] [i_5] [i_6] [i_7] = ((/* implicit */short) ((unsigned long long int) 1097968663U));
                            }
                        } 
                    } 
                } 
                var_26 += ((/* implicit */signed char) var_13);
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 20; i_8 += 3) 
                {
                    for (short i_9 = 1; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) var_8);
                            arr_34 [i_3] [i_4] [8ULL] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8743693708902257416ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (((((/* implicit */_Bool) (unsigned short)34513)) ? (8743693708902257416ULL) : (7790212568102590859ULL)))))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) (unsigned char)200))));
                            arr_35 [(unsigned short)9] [i_3] [i_4 - 2] [i_3] [i_3] = ((/* implicit */unsigned char) 2883230565U);
                            var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)255))));
                            var_29 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) 725633296U)));
                        }
                    } 
                } 
            }
        } 
    } 
}
