/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41232
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
    var_20 *= var_6;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_1] &= ((/* implicit */short) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3]);
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_2] [i_0] [i_0] [i_3] [i_0] [i_1])) : (((/* implicit */int) arr_10 [i_2] [i_1] [i_1] [i_3] [i_2] [6]))))) ? ((+(((/* implicit */int) (short)(-32767 - 1))))) : (((((/* implicit */int) arr_10 [i_2] [i_1] [12LL] [i_0] [i_2] [i_0])) << (((var_1) - (2951659695U)))))));
                            var_22 ^= ((/* implicit */unsigned short) var_16);
                            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((unsigned int) var_9));
                /* LoopSeq 3 */
                for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    arr_15 [i_0] [11LL] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(4004254505U)))) ? (((((/* implicit */long long int) var_6)) | (arr_5 [i_1 - 1]))) : (((((/* implicit */_Bool) (short)-31031)) ? (arr_5 [i_1 - 3]) : (((/* implicit */long long int) -2147483635))))));
                    var_25 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)32))) & (((long long int) var_6))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 3] [i_1 - 4])) * (((/* implicit */int) arr_12 [i_1 - 4] [i_1 - 3] [i_1 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))) : (((long long int) var_14))));
                }
                for (int i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    var_27 &= ((/* implicit */unsigned long long int) (-(((long long int) 4294967295U))));
                    var_28 = ((/* implicit */unsigned char) ((min((var_17), (((/* implicit */long long int) arr_4 [i_0 + 1] [i_0])))) - (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)161)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (int i_7 = 2; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */short) max((var_10), (((unsigned int) var_6))));
                                var_30 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (signed char)-35))))));
                                var_31 &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) ((short) (unsigned short)63))) < (((/* implicit */int) (short)9026)))));
                                var_32 = ((var_5) ? (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)3)), (var_14)))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_17)))) - (((((/* implicit */_Bool) (short)-9011)) ? (3815545619U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_8 = 1; i_8 < 12; i_8 += 4) 
                {
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) 479421676U)))))) && (((/* implicit */_Bool) ((int) min((1756580155), (((/* implicit */int) var_19)))))))))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((1264747349U), (var_6)))) != (((unsigned long long int) ((_Bool) arr_19 [i_0] [i_0] [i_8])))));
                    var_35 = ((/* implicit */signed char) ((unsigned int) (unsigned char)255));
                }
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_19 [i_0] [i_0] [i_1])))) : (var_13))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (long long int i_10 = 2; i_10 < 23; i_10 += 4) 
        {
            for (signed char i_11 = 4; i_11 < 23; i_11 += 2) 
            {
                {
                    var_37 ^= ((/* implicit */unsigned short) (_Bool)1);
                    arr_33 [i_9] = ((/* implicit */unsigned int) ((_Bool) 15100269005265900712ULL));
                    var_38 = ((/* implicit */signed char) -8799116416208700676LL);
                }
            } 
        } 
    } 
    var_39 -= ((/* implicit */unsigned int) ((((/* implicit */int) (((-(var_17))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29505)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)107)))))))) * (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (short)-32767)) * (((/* implicit */int) var_3)))) : (((/* implicit */int) var_16))))));
    /* LoopSeq 1 */
    for (unsigned char i_12 = 2; i_12 < 22; i_12 += 4) 
    {
        var_40 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)198)) ? (3661029214514796979LL) : (((/* implicit */long long int) -1756580146))))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32760)) ? (6967540989026608449ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) || (((/* implicit */_Bool) var_4)))))));
        arr_36 [2LL] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_19)));
    }
}
