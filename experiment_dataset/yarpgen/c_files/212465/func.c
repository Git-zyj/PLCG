/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212465
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_10 = ((/* implicit */_Bool) (unsigned char)0);
            var_11 = ((/* implicit */unsigned int) (unsigned char)177);
        }
        for (short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_7 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0])) >> (((((/* implicit */int) var_3)) - (39850)))))) : (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (9587816964699495919ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2])) > (((((/* implicit */int) (unsigned short)48499)) / (((/* implicit */int) arr_0 [i_2]))))))))));
            arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((2902634889U), (((/* implicit */unsigned int) arr_6 [i_2]))))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [7]))) / (var_2))))))));
            var_12 = max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) - (var_1))), (((/* implicit */unsigned long long int) (unsigned char)244)))), (((/* implicit */unsigned long long int) min((arr_6 [i_0]), (((/* implicit */unsigned short) arr_0 [i_2]))))));
            arr_9 [i_2] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)11), ((unsigned char)141))))))) > (((/* implicit */unsigned long long int) 1389076291))));
        }
        var_13 = ((/* implicit */unsigned char) var_5);
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)134)) ? (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) (unsigned char)52))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) : (((long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))));
            var_15 = ((/* implicit */unsigned char) arr_3 [i_3] [i_3]);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_16 ^= (_Bool)1;
            arr_16 [i_4] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65530))))) | (min((10546456386538090998ULL), (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4] [i_4])))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)134))))) == (((/* implicit */int) arr_0 [i_0])))) ? (((long long int) arr_6 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (long long int i_8 = 2; i_8 < 11; i_8 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) var_4);
                            var_19 = ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)45515)))), (var_0))));
                            var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)4)), (9997424621671711662ULL)))) || (((/* implicit */_Bool) var_3)))))) > (min((((0LL) - (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6] [i_7] [i_6]))))), (min((((/* implicit */long long int) arr_12 [i_6] [8ULL])), (205728533033581040LL)))))));
                        }
                    } 
                } 
            } 
            var_21 = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) || ((((((_Bool)1) || (((/* implicit */_Bool) arr_14 [i_0] [i_0] [(short)8])))) || (((/* implicit */_Bool) 10112249329901829723ULL)))));
        }
    }
    var_22 = ((((/* implicit */_Bool) (unsigned char)136)) ? ((-(var_8))) : (((/* implicit */unsigned long long int) min((min((0U), (2902634886U))), ((+(var_2)))))));
    var_23 = ((/* implicit */unsigned char) max(((unsigned short)65535), ((unsigned short)44388)));
}
