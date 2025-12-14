/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225094
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_7))))) & (((max((var_5), (((/* implicit */int) var_6)))) + (((/* implicit */int) min(((unsigned short)52032), (((/* implicit */unsigned short) (signed char)(-127 - 1))))))))));
    var_13 = ((/* implicit */unsigned int) 9824952604188969853ULL);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_14 = ((/* implicit */long long int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))) << (((((/* implicit */int) ((short) var_8))) - (29066)))))));
                        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((max((var_3), (var_8))), (((/* implicit */short) var_6))))), (((((/* implicit */int) var_6)) - (((/* implicit */int) var_0))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0 + 3])) ? (var_4) : (((/* implicit */int) arr_13 [i_0 + 3]))))), (max((min((var_11), (var_10))), (((/* implicit */unsigned int) min((var_4), (((/* implicit */int) var_2)))))))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_4)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_8))))), (((unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            arr_15 [i_0] [i_0 - 3] = ((/* implicit */short) ((((((/* implicit */int) var_8)) != (((/* implicit */int) (signed char)-113)))) ? (((((((/* implicit */_Bool) (signed char)-115)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)36994)) - (36968))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_18 = ((/* implicit */_Bool) 536870912U);
            var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (arr_10 [i_0] [i_0 - 2] [i_0 - 2])))));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_4 [i_0] [i_5]), (((/* implicit */unsigned short) var_9)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_2 [i_0])))) ? ((-(((/* implicit */int) var_6)))) : (((((var_5) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) - (8773))))))) : (var_4)));
            arr_19 [i_5] = ((min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))) + (((((/* implicit */int) (short)255)) << (((((((/* implicit */_Bool) var_4)) ? (arr_10 [i_5] [i_5] [i_0 - 3]) : (((/* implicit */unsigned int) var_4)))) - (3915855179U))))));
        }
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_2)), (var_6))))))) ? (((((((/* implicit */unsigned long long int) var_10)) & (4326996883702090841ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-116)) ? (535822336) : (((/* implicit */int) (unsigned short)65535))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 369239442)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))), (var_5))))));
}
