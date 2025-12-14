/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33879
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
    var_18 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_4 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_2 [i_0] [(unsigned short)2])) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -4839626613957598767LL)) / (arr_0 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((unsigned int) 4839626613957598781LL))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                arr_7 [i_0] [i_1] [1LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) >> ((((-(((((/* implicit */_Bool) var_17)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))) + (3096614467038922613LL)))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) ((-4839626613957598773LL) != (((/* implicit */long long int) var_10)))))) < (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-54)), (-2198655961281526090LL)))) + (min((((/* implicit */unsigned long long int) 2566908968U)), (arr_6 [i_2] [i_1] [12])))))));
            }
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (signed char)32)))) << (((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) 1728058327U)) : (arr_6 [i_0] [(_Bool)0] [i_1]))) - (1728058324ULL))))), (((arr_6 [i_1] [i_0] [i_0]) ^ (arr_0 [i_1]))))))));
            var_21 = ((/* implicit */signed char) ((arr_3 [i_0]) ^ (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (max((var_4), (((/* implicit */int) (unsigned short)33197)))))))));
        }
        for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (min((((/* implicit */unsigned long long int) ((short) arr_9 [i_0] [(_Bool)1] [i_3]))), (var_14)))));
            arr_11 [i_3] = var_13;
            var_23 = ((/* implicit */unsigned int) ((max((arr_8 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) 2773737851733567830ULL)) ? (((/* implicit */int) (unsigned short)33203)) : (((/* implicit */int) (unsigned short)511))))))) == (max((((4839626613957598767LL) * (((/* implicit */long long int) 0)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1796846559)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)27394)))))))));
        }
        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) <= (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)33226))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_0] [i_0] [i_0]), ((unsigned short)32333)))))))));
        arr_12 [i_0] = ((/* implicit */unsigned short) ((_Bool) (unsigned short)27405));
    }
}
