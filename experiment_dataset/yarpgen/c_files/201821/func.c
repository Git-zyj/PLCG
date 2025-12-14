/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201821
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
    var_16 = ((/* implicit */unsigned char) max((min((min((((/* implicit */long long int) var_2)), (var_6))), (((/* implicit */long long int) ((signed char) var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(2454921377U)))) ? (((((/* implicit */_Bool) 3678677798U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))) : ((+(((/* implicit */int) var_3)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) (unsigned char)63);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_18 *= var_13;
            var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))) : (2305843009213693951LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)31943), (arr_4 [i_1] [14U]))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_2)))))));
        }
        for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (4067182193134749345LL)))))));
            arr_7 [i_0] [i_2 - 1] [i_0] |= var_12;
            arr_8 [i_0] [(short)9] [i_2 - 1] = min((((/* implicit */short) ((signed char) arr_1 [i_2 + 1]))), (arr_4 [i_0] [i_2]));
            arr_9 [i_0] [i_2] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((unsigned short) arr_2 [(unsigned short)7]))), (arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_1 [(_Bool)1]))));
        }
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_21 = ((/* implicit */int) ((((547786692U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))) < (2712773568U)));
            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)208)))) != (((/* implicit */int) (unsigned short)49079)))))) ^ (((((/* implicit */_Bool) min(((unsigned short)192), (((/* implicit */unsigned short) (unsigned char)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) : (((long long int) 5U))))));
            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
            arr_12 [i_0] [(unsigned short)20] [i_0] |= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) max((arr_2 [i_3]), (arr_0 [i_3])))) ? (((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) arr_6 [(signed char)5] [i_3] [i_3]))))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max(((-(((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))), (((/* implicit */int) ((_Bool) 134217216U))))))));
        }
        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_25 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4]))))));
            var_26 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_11 [i_0] [i_0])) >> (((534591714U) - (534591702U))))), (((/* implicit */int) (unsigned char)17))));
        }
    }
    var_27 = min((-1LL), (((/* implicit */long long int) var_1)));
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) ((-2716879615124319912LL) + (((/* implicit */long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_14)))))) : (min((((/* implicit */long long int) (short)-32245)), (var_6)))))));
    var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)17058), (((/* implicit */unsigned short) var_15))))) ? ((+(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13))))))) * (-4067182193134749346LL)));
}
