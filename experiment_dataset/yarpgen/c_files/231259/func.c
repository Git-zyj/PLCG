/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231259
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
    var_18 |= ((/* implicit */unsigned char) var_9);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */short) (-(((unsigned int) arr_4 [i_0] [i_0 - 1] [i_0 + 1]))));
                        var_20 = ((/* implicit */int) ((min((1537936643U), (((/* implicit */unsigned int) arr_2 [i_0 - 1])))) >> (((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_13)))) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_3]))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)45882)))))) - (149)))));
                        var_21 ^= ((/* implicit */unsigned int) (~(((arr_9 [i_0] [i_0] [i_0] [2U]) ? ((-(((/* implicit */int) arr_2 [i_3])))) : (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_3] [i_0]))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_2] [i_3])) | (((/* implicit */int) (unsigned char)88))))) | (3682524592470072259LL)))) ? (((/* implicit */int) ((((/* implicit */int) ((short) (_Bool)1))) > (((/* implicit */int) (unsigned char)177))))) : ((~(((((/* implicit */_Bool) 2757030655U)) ? (arr_0 [i_0] [i_2]) : (((/* implicit */int) (unsigned char)88))))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 15; i_4 += 3) 
                    {
                        var_23 *= (!(((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) (short)-12858)), (1537936643U))))));
                        var_24 += ((/* implicit */_Bool) (unsigned char)97);
                    }
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        arr_17 [i_0 - 2] [(short)8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2757030652U)) ? (((/* implicit */int) arr_9 [i_0] [i_0 - 2] [9ULL] [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1])) != (((/* implicit */int) (unsigned short)31026)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2757030652U)) ? ((+(((/* implicit */int) (unsigned short)57743)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1947507403U))))))))));
                        var_25 = ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_2)));
                    }
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)184)) != (((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0])) << (((((((/* implicit */_Bool) 3386835883U)) ? (11345076239110087064ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) - (11345076239110087053ULL)))))));
                }
            } 
        } 
    } 
}
