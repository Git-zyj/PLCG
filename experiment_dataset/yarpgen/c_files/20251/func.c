/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20251
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
    var_12 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)1))))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_9 [i_2] [i_1] [i_2] &= ((/* implicit */unsigned short) max((((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0])) - (arr_7 [i_0] [i_1] [i_2]))), (((/* implicit */long long int) ((unsigned int) arr_7 [i_0] [i_0] [i_2])))));
                    var_14 = ((/* implicit */_Bool) arr_2 [i_0]);
                    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12))) < (var_3)))) : (((/* implicit */int) var_2)))) | ((~(((/* implicit */int) (short)22))))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((min((var_3), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)218)) < (((/* implicit */int) (short)-19))))))), (((/* implicit */unsigned int) ((unsigned short) var_2)))));
                }
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */unsigned long long int) (-(arr_17 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0])))), (((unsigned long long int) arr_14 [(unsigned char)14] [i_1] [i_3] [i_4])))))));
                                var_17 *= ((2463935489U) ^ (((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_3] [8ULL] [16ULL]))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) arr_1 [i_0]);
                    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) : (1831031797U))), (2463935503U)));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_1 [i_1])) - (209)))))) ? (max((5363094007746350779LL), (((/* implicit */long long int) (unsigned char)111)))) : (min((5363094007746350796LL), (((/* implicit */long long int) (unsigned char)246)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(4003298200U)))) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_7])) : (((/* implicit */int) (signed char)116)))))));
                        var_21 *= ((/* implicit */unsigned char) ((short) (_Bool)1));
                        arr_23 [i_0] [i_1] [i_0] = ((/* implicit */short) (~(2463935496U)));
                        arr_24 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) (-(3492214903387946057ULL)));
                    }
                    arr_25 [i_1] [i_6] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) 1237465482U)) ? (var_9) : (967834647U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    var_22 *= ((/* implicit */unsigned long long int) ((4294967284U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-22)))));
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned short) (-(arr_16 [i_0] [i_1] [i_0] [i_1]))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3626587206U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(679044480U)))) ? (((((/* implicit */_Bool) arr_16 [i_6] [14ULL] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)224)))) : (((((/* implicit */_Bool) (short)-15006)) ? (((/* implicit */int) (short)-37)) : (((/* implicit */int) (unsigned short)384))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15026)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_1] [i_6])))))))));
                }
            }
        } 
    } 
}
