/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36492
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
    var_16 = ((/* implicit */long long int) var_13);
    var_17 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -2709813482231517772LL)) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-58), ((signed char)43))))) : (((((/* implicit */_Bool) var_3)) ? (3968944434483030105LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) (signed char)-58))));
    var_18 = ((/* implicit */unsigned long long int) ((max((max((var_12), (var_9))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (1761258788U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2533708504U)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_19 &= 13406781200149337125ULL;
        arr_2 [i_0 - 3] |= max(((((+(((/* implicit */int) arr_1 [i_0])))) + (max((((/* implicit */int) arr_1 [i_0])), (var_13))))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]))) || (((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned short) (_Bool)1)))))))));
        var_20 = ((/* implicit */signed char) var_14);
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max(((~(((/* implicit */int) (!(var_9)))))), (((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) 2533708507U)))))))))))));
                    arr_9 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) / (max((((/* implicit */long long int) (_Bool)1)), (0LL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (2047ULL)))) ? (-500208075) : (-500208075))) : ((~((-(-304387198))))));
                }
            } 
        } 
        arr_10 [(unsigned short)7] = ((/* implicit */_Bool) var_10);
        var_22 = ((/* implicit */long long int) arr_4 [i_1]);
        /* LoopSeq 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (((((/* implicit */_Bool) -3611298716450545058LL)) ? (var_15) : (var_4)))))) * (((((/* implicit */int) arr_8 [i_1] [i_4 - 1] [i_4 - 1])) * (((/* implicit */int) ((((/* implicit */int) (signed char)58)) == (((/* implicit */int) (_Bool)1)))))))));
            arr_14 [i_4] [i_4 - 1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(0U)))) - (arr_6 [i_1])));
            arr_15 [i_4] = ((/* implicit */unsigned char) min((max((var_11), (((/* implicit */unsigned long long int) arr_5 [i_4 - 1])))), (((/* implicit */unsigned long long int) var_1))));
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) (_Bool)1);
            var_24 ^= ((/* implicit */int) (unsigned short)14379);
            arr_18 [i_1] [i_1] [i_5] = ((/* implicit */int) var_0);
            arr_19 [i_1] = (unsigned short)25392;
        }
        var_25 = ((/* implicit */unsigned char) 8544393856092020971ULL);
    }
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        var_26 = ((/* implicit */long long int) min((var_26), (max((((/* implicit */long long int) 1761258791U)), (-1813240382593964680LL)))));
        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (var_6))) >> (((((/* implicit */_Bool) 1813240382593964679LL)) ? (((/* implicit */int) arr_11 [i_6] [i_6])) : (((/* implicit */int) arr_16 [i_6] [i_6]))))));
    }
    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 2533708504U)) ^ (var_11))) == (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)53010)) ? (((/* implicit */long long int) var_5)) : (3968944434483030113LL))))))));
}
