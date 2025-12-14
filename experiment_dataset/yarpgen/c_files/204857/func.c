/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204857
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
    var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) 1156471024)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_8))))) : ((-(((/* implicit */int) (short)31068)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((15216287492305982421ULL) > (((/* implicit */unsigned long long int) var_2)))))) <= (((((/* implicit */_Bool) var_5)) ? (3974176075U) : (320791221U))))))));
        var_16 = ((/* implicit */unsigned short) 320791221U);
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((((/* implicit */int) var_1)) + (2147483647))) << (((3974176072U) - (3974176072U))))))) % ((+(((/* implicit */int) (unsigned char)104))))));
            arr_10 [i_1] [i_1] = ((/* implicit */int) min(((~(max((-1128604785738024484LL), (((/* implicit */long long int) (unsigned char)85)))))), (((-8361913004680602732LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
            var_17 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)95)) * (((/* implicit */int) (signed char)12)))))))) <= ((+(((/* implicit */int) min(((unsigned char)112), (((/* implicit */unsigned char) var_0)))))))));
        }
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) ((max((3974176075U), (var_10))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (var_9)))))))))))));
            var_19 = ((/* implicit */unsigned short) ((320791220U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21)))));
            var_20 = ((/* implicit */unsigned int) ((8U) != (((((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) - ((-(138335189U)))))));
        }
        var_21 += max((((((/* implicit */int) (unsigned char)154)) ^ ((~(((/* implicit */int) var_8)))))), (((/* implicit */int) (((~(((/* implicit */int) var_1)))) > (((((/* implicit */int) (unsigned char)161)) & (((/* implicit */int) (short)-10316))))))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 16; i_5 += 2) 
            {
                for (unsigned int i_6 = 3; i_6 < 18; i_6 += 3) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((3974176088U), (((/* implicit */unsigned int) (short)-10325))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) var_9)) % (var_7))) < (((/* implicit */long long int) ((var_9) ^ (((/* implicit */int) (short)10316))))))))) : (max((min((((/* implicit */long long int) (unsigned char)41)), (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_11)))))))));
                        arr_19 [i_6] [i_4] [i_5 - 1] [i_5] [i_5 + 3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((-607900290), (((/* implicit */int) var_8)))))))) / (((int) var_8))));
                    }
                } 
            } 
            arr_20 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)25373))))))))));
        }
    }
}
