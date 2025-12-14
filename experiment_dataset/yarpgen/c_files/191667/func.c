/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191667
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (var_8)))), (min((((/* implicit */long long int) (unsigned short)65535)), (8170311841655812975LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_4)), (var_17)))) ? ((+(((/* implicit */int) var_6)))) : (var_12)))) : (var_15)));
    var_19 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)19))) | (-7199975784447057379LL)));
        var_20 = ((((/* implicit */_Bool) 3674055203U)) ? (8170311841655812973LL) : (-7199975784447057363LL));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_16))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) 17137230728106385697ULL);
        var_22 = ((/* implicit */unsigned short) ((arr_1 [i_1]) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) 3072LL)) : (arr_5 [i_1] [i_1]))))))) : (((/* implicit */int) (_Bool)1))));
        var_23 = ((/* implicit */_Bool) (+(max((max((((/* implicit */long long int) 4294967295U)), (8441110133091441121LL))), (((/* implicit */long long int) arr_0 [i_1]))))));
        var_24 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-93)) && (((/* implicit */_Bool) 743931785))))) * (((/* implicit */int) max((((/* implicit */signed char) var_13)), ((signed char)124)))))) / ((+(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned short i_4 = 2; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_16))))) : (((/* implicit */int) arr_2 [i_2])))) > (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3])) ? (arr_10 [i_1] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
                        var_26 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */_Bool) 3183594049U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32502))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [12U] [i_2] [i_2]) > (1111373242U))))))), (((/* implicit */unsigned int) arr_7 [i_2] [i_4]))));
                        var_27 = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) arr_0 [i_4 + 2])));
                        var_28 = ((/* implicit */signed char) min((((((/* implicit */long long int) min((3101012140U), (((/* implicit */unsigned int) arr_7 [i_1] [i_2]))))) % (((arr_7 [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (268435455LL))))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)0)))))));
                        arr_15 [i_1] [(signed char)19] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) ((arr_8 [i_1] [i_2] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)31935)) > (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */int) ((unsigned char) arr_11 [i_1] [i_2] [i_3])))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
    {
        var_29 &= ((/* implicit */signed char) ((((arr_18 [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5])))));
        arr_19 [i_5] [i_5] = ((/* implicit */short) (+(((arr_16 [3ULL]) << (((((/* implicit */int) (short)17394)) - (17340)))))));
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-106)) * (((/* implicit */int) (signed char)-115))));
}
