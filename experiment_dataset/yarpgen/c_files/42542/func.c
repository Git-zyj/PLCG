/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42542
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */int) ((0LL) == (((/* implicit */long long int) 421356336))))) + (421356336)))));
        var_20 = ((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-24224)) && (((/* implicit */_Bool) -8760874789675982215LL)))))) : (var_2))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_5 [12ULL] [i_1] = ((/* implicit */short) max((((((/* implicit */long long int) -421356353)) & (-8760874789675982214LL))), (max((((/* implicit */long long int) arr_4 [i_1])), (-8760874789675982215LL)))));
        var_21 = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17273)))))) > (max((((/* implicit */unsigned long long int) 421356330)), (5ULL))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_1 [i_2]))));
                    arr_11 [i_1] = ((/* implicit */short) (~(((/* implicit */int) min((arr_9 [i_1] [i_2] [i_2] [i_3]), (((/* implicit */unsigned short) (short)21)))))));
                    var_23 = ((((/* implicit */_Bool) min((((var_8) & (((/* implicit */unsigned long long int) -8760874789675982219LL)))), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21)) ? (1914829277) : (-1))))))) : ((~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)83)), (var_9)))))));
                    var_24 = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1] [i_2]))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_2]))) : (-8760874789675982235LL)))));
                }
            } 
        } 
        var_25 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [(_Bool)1] [i_1] [i_1] [(unsigned char)4]), (var_9)))) && (((((/* implicit */_Bool) arr_1 [(unsigned short)16])) || (((/* implicit */_Bool) arr_1 [(_Bool)1]))))))) >= (((((/* implicit */_Bool) min((10ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? ((+(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) ((_Bool) arr_6 [3LL] [i_1])))))));
    }
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_19))));
    /* LoopSeq 2 */
    for (int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */long long int) (short)19475);
        var_27 = ((/* implicit */unsigned long long int) ((_Bool) (-((-(((/* implicit */int) arr_6 [i_4] [i_4])))))));
    }
    for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_28 = (!(((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (short)-19476)))))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (15697306150152186704ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4611686018427387903ULL)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (signed char)-124))))), (min((((/* implicit */long long int) -19)), (-8760874789675982239LL))))))));
    }
}
