/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210662
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 23; i_2 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (~(arr_0 [i_0]))))) | (((/* implicit */int) ((unsigned char) (~(18446744073709551615ULL)))))));
                    var_19 = ((/* implicit */short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) >> (((((/* implicit */int) ((signed char) arr_2 [14U] [i_2]))) - (69)))))));
                }
                for (unsigned short i_3 = 3; i_3 < 23; i_3 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-11181))))), (((((/* implicit */int) (short)19711)) >> (((var_10) - (2118220499U))))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((((1780517992621509227LL) & (-9024920230507114284LL))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) >> ((+(min((((/* implicit */unsigned long long int) (short)14103)), (16ULL)))))));
                                arr_14 [i_3] = ((/* implicit */unsigned int) ((((var_8) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))) >> (((((/* implicit */int) (unsigned short)32704)) >> (((8323072) - (8323048)))))));
                                arr_15 [14] [i_1] [(short)1] [i_3] = (((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) 11890423652283221236ULL))))))) >> ((((-(max((1580583117), (((/* implicit */int) (unsigned char)144)))))) + (1580583144))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_3]) >> (((arr_0 [i_3]) - (4579942093361475737ULL))))))))) >> ((+(((/* implicit */int) (unsigned short)0))))));
                    var_23 = min((max((((((/* implicit */unsigned int) ((/* implicit */int) (short)1684))) + (var_10))), (((/* implicit */unsigned int) ((unsigned char) (signed char)12))))), (((/* implicit */unsigned int) ((((((((/* implicit */int) (short)-8144)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) ((signed char) var_1))) + (121)))))));
                    var_24 -= ((/* implicit */unsigned int) (+(((((var_2) >> (((var_2) - (3125399269206131527ULL))))) >> (((((unsigned long long int) (unsigned short)49152)) - (49129ULL)))))));
                }
                for (unsigned short i_6 = 3; i_6 < 23; i_6 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((min((((/* implicit */int) max((arr_13 [i_0] [i_1] [(short)4] [i_6 + 1] [i_6]), (var_5)))), (((((/* implicit */int) (signed char)115)) | (((/* implicit */int) arr_12 [i_0] [i_1] [i_6] [i_0] [i_1])))))) & (((((/* implicit */int) arr_1 [i_6 - 1])) ^ (((/* implicit */int) arr_1 [i_6 - 3])))))))));
                    var_26 |= ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_5 [i_0] [i_6 - 1] [i_0] [i_1])))), (min(((-(((/* implicit */int) (short)-11287)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))))));
                }
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    arr_21 [i_1] [i_1] [i_7] = ((/* implicit */unsigned long long int) min((min((((((/* implicit */unsigned int) arr_9 [i_7] [i_7])) / (var_10))), (((/* implicit */unsigned int) max(((unsigned short)1), (((/* implicit */unsigned short) (signed char)71))))))), (max((((/* implicit */unsigned int) ((short) var_13))), ((+(0U)))))));
                    arr_22 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (((int) (unsigned char)112))))), (min((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) var_17)), (var_2)))))));
                    var_27 *= ((/* implicit */short) (!(min(((!(((/* implicit */_Bool) arr_0 [i_0])))), ((!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))));
                    var_28 = (i_7 % 2 == 0) ? ((~(max((((arr_2 [i_0] [i_1]) >> (((arr_19 [i_7]) - (687803335U))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))))))) : ((~(max((((arr_2 [i_0] [i_1]) >> (((((arr_19 [i_7]) - (687803335U))) - (1812925693U))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255)))))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */short) max((var_10), (((/* implicit */unsigned int) (short)32747))));
}
