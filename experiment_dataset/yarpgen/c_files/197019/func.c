/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197019
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
    var_10 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_4)), (7786549038929174285LL)));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */unsigned int) arr_0 [i_0 - 2])) : (var_7))), (((arr_1 [i_0 + 1]) << (((arr_0 [i_0 + 1]) + (1739746636)))))));
        arr_3 [(unsigned short)12] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 11815572054995067477ULL)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)118)), ((unsigned char)0)))) : (((/* implicit */int) ((_Bool) var_5))))))));
        var_11 = ((/* implicit */unsigned short) 6047969374168717257LL);
    }
    /* LoopSeq 1 */
    for (int i_1 = 3; i_1 < 11; i_1 += 4) 
    {
        var_12 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */long long int) arr_0 [i_1 + 2])) >= (3699472403680856291LL)))), (max((var_7), (((/* implicit */unsigned int) var_2))))));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                var_13 = ((/* implicit */short) min((max((((/* implicit */long long int) (unsigned char)3)), (7786549038929174274LL))), (((/* implicit */long long int) var_7))));
                var_14 *= ((/* implicit */short) min((-7786549038929174279LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)8191)))))));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2] [i_3])))))))) : (((/* implicit */int) ((((var_0) > (var_3))) || (((/* implicit */_Bool) var_0))))))))));
                var_16 *= ((/* implicit */unsigned char) (unsigned short)32824);
                arr_13 [i_1] [i_2] [i_3] = ((unsigned char) (~(((/* implicit */int) min(((short)-20774), (((/* implicit */short) (_Bool)1)))))));
            }
            arr_14 [i_2] [i_2] [i_2 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)250)))) - ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))) == (((/* implicit */int) (((+(((/* implicit */int) (unsigned short)18)))) >= (((/* implicit */int) (_Bool)1)))))));
        }
        var_17 = ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) max(((signed char)80), (((/* implicit */signed char) (_Bool)1))))) : ((~(((/* implicit */int) (_Bool)0))))))) % (-7339655340583779959LL));
    }
}
