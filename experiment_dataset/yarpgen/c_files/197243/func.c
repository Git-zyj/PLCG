/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197243
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
    var_11 = ((/* implicit */_Bool) max((((long long int) var_7)), (((/* implicit */long long int) var_3))));
    var_12 -= ((/* implicit */signed char) ((unsigned int) (_Bool)0));
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) -446200749)) != (var_7))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = arr_1 [i_0];
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_10 [i_2] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */int) (short)-20064);
                        var_14 = ((/* implicit */short) ((unsigned char) ((unsigned char) max((((/* implicit */short) (unsigned char)72)), ((short)-26392)))));
                        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_4 [i_3] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (1751959384) : (2137919794))) : (((/* implicit */int) ((arr_6 [i_3 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                    }
                } 
            } 
            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -2930785900573190225LL)) : (7054010869870614327ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))))) ? (((/* implicit */int) ((arr_3 [i_1 - 1] [i_1 + 1]) && (arr_3 [i_1 + 1] [i_1])))) : (min((((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2930785900573190224LL)))))))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 3) 
        {
            var_15 ^= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)95)))) - (max((((/* implicit */unsigned long long int) (signed char)118)), (arr_15 [i_0] [7ULL] [i_4]))))));
            var_16 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -7023005411362983801LL))));
        }
        arr_16 [5LL] [(unsigned char)8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((long long int) (((_Bool)1) ? (-1430187138756955617LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_0] [i_0] [(signed char)0]), (((/* implicit */long long int) (-2147483647 - 1)))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (117440512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
    }
    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) (~((+(((((/* implicit */int) var_8)) >> (((var_9) - (1133606493)))))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (3942650136736394820LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) >> (((max((((/* implicit */long long int) (-2147483647 - 1))), (var_4))) + (2147483658LL)))))) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -1)) : (4294967295ULL))))))));
        arr_21 [i_5] = ((/* implicit */long long int) max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) arr_18 [i_5] [i_5]))));
        var_19 = ((/* implicit */int) var_1);
    }
    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 4) 
    {
        arr_25 [(unsigned short)16] = ((/* implicit */int) ((unsigned long long int) 5013022615108884022ULL));
        arr_26 [i_6] &= ((/* implicit */int) ((_Bool) var_9));
        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) (short)-17134))))) && (((/* implicit */_Bool) arr_24 [(_Bool)1] [4])))) ? (((max((var_9), (((/* implicit */int) var_3)))) << (((((/* implicit */int) var_5)) - (11554))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
        var_21 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) var_2))))), ((unsigned char)144)));
    }
}
