/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27443
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) max((var_5), (((short) (unsigned short)65325))))) * (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_1])), (arr_0 [i_0] [i_1])))))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1819))) : (arr_1 [i_0]))))))) > (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_0 [i_1] [i_0]))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_16) & (((/* implicit */long long int) 3173700919U))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)72))))) | (((long long int) (short)-1924)))))));
                var_20 = ((/* implicit */long long int) ((_Bool) (_Bool)0));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        var_21 ^= ((/* implicit */short) max((min((((((/* implicit */_Bool) arr_8 [4] [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((int) var_6))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-16074)), (arr_5 [(unsigned char)8]))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)53316)))), ((~(((/* implicit */int) arr_2 [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_2 - 3])) : (((/* implicit */int) arr_7 [i_2 - 2])))) : ((+((+(((/* implicit */int) arr_7 [i_2]))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_23 = ((/* implicit */_Bool) min((((((/* implicit */int) var_13)) >> (((/* implicit */int) arr_10 [i_3])))), (((/* implicit */int) var_6))));
        var_24 = ((/* implicit */long long int) min(((unsigned short)12228), (min((((/* implicit */unsigned short) arr_10 [i_3])), (arr_9 [i_3] [i_3])))));
        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)183)))))));
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 17; i_4 += 1) 
        {
            var_26 ^= ((/* implicit */short) max((((/* implicit */int) ((short) ((arr_11 [i_3] [i_3] [i_4]) % (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) var_7)) ? (min((-725421624), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(unsigned short)1] [i_4] [i_4 - 2])))))))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */long long int) min(((-(-1099983709))), (((/* implicit */int) var_1))))) < (arr_11 [i_3] [i_4] [i_4]))))));
            var_28 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_11 [5U] [i_4] [i_4]))) == (max((((/* implicit */int) ((var_14) >= (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_4]))))), (((((/* implicit */_Bool) 1426800044U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)148))))))));
        }
    }
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
    {
        var_29 ^= ((/* implicit */short) -7410505146593245451LL);
        var_30 = ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 654372149U)) ? (((/* implicit */int) (unsigned short)53316)) : (1099983709)))) / (arr_13 [i_5] [i_5]))));
    }
    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_1))));
}
