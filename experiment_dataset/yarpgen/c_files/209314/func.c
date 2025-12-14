/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209314
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? ((-((-(var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)34260)) : (((/* implicit */int) var_5))))) ? (33199861U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33199861U)) ? (((((/* implicit */_Bool) 4793749823012808432ULL)) ? (12929026449679315640ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */int) (_Bool)0))))) || (((var_1) == (((/* implicit */long long int) 1695606824U))))))) : ((~(((/* implicit */int) var_16)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-116))))), ((~(4261767454U)))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47649))) : (33199855U))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            var_22 ^= ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) (unsigned short)55841)) ? (4261767454U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))))))));
                            var_23 = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) ((_Bool) 2060586466))))));
                            var_24 = ((/* implicit */long long int) max(((-(((((/* implicit */unsigned long long int) arr_3 [i_1] [(_Bool)1])) & (8920756679691596678ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) < (((var_18) & (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((3206211671558773001LL) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1]))) : (4261767480U)))) ? ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_17))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (arr_0 [i_1]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_2] [i_4]))))))));
                        }
                        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (2905181074U)))) != ((~(((/* implicit */int) (_Bool)1)))))))) ^ ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525))) & (var_1)))))));
                        arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_2 - 2]))) & (var_4)))) ? (((((/* implicit */_Bool) 33199854U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_2 - 2])))) : (((/* implicit */int) ((unsigned short) -7639961362502108568LL)))));
                    }
                    var_27 ^= ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned char)103))))));
                }
            } 
        } 
    } 
}
