/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214935
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
    var_17 = var_11;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) ((max((17550671124087650231ULL), (((/* implicit */unsigned long long int) (short)-17117)))) != (min((((((/* implicit */_Bool) (signed char)101)) ? (13330893830340121239ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)7]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        var_19 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9075)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17547709855203272704ULL)))) ? (((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */int) arr_1 [(signed char)4])) : (((/* implicit */int) (short)-32743)))) : (((/* implicit */int) arr_2 [(_Bool)1] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)32729)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) > (((/* implicit */int) arr_1 [i_0]))))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        var_20 -= ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) 638973136)) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) (unsigned char)140)))), (((/* implicit */int) arr_1 [4U]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32745))));
        var_22 = ((/* implicit */unsigned char) (~(arr_7 [i_1 - 2])));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32729)) <= (((/* implicit */int) (unsigned char)119)))))));
        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_0 [(unsigned char)7] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2])))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((arr_15 [i_2] [i_2] [i_4] [i_2]) ? (2863668580U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70)))))) : (min((8227951549536646805ULL), (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2]))))))) ? (((((/* implicit */int) (signed char)-103)) % (((/* implicit */int) (signed char)-121)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (638973136)))))))));
                        var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_2] [i_2])) <= (((arr_15 [i_2] [i_3] [8] [i_5]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))))) : (((((/* implicit */_Bool) (short)26690)) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_9 [(unsigned char)14] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            arr_18 [i_6] [i_5] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-81)) != (((/* implicit */int) (signed char)-104)))))));
                            var_28 = ((/* implicit */int) min((var_28), (((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)6)) : (-1728000063))) >> (((max((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)136)))), (var_1))) - (515296679)))))));
                        }
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [(short)11] [(signed char)3])) > (((((/* implicit */_Bool) 9047076395232387670ULL)) ? (((/* implicit */int) (short)56)) : (((/* implicit */int) arr_1 [i_2])))))))));
    }
    var_30 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) % (var_9))));
}
