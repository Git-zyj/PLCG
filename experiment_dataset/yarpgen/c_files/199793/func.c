/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199793
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
    var_11 += ((/* implicit */unsigned long long int) (short)-32759);
    var_12 = ((/* implicit */unsigned long long int) var_9);
    var_13 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((signed char) (unsigned short)50517))), (((long long int) (signed char)19)))) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-20)), (3668073473140473417LL)))) ? (((unsigned int) arr_0 [i_0])) : (((unsigned int) var_10))));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned int) ((unsigned char) ((unsigned int) arr_0 [3U]))));
        arr_4 [i_0] = ((signed char) (unsigned char)10);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_8 [i_0] [i_1] [i_0] = 11562097560820858612ULL;
            arr_9 [i_0] [i_0] = ((/* implicit */signed char) -3668073473140473409LL);
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [4LL])) ? (min((1130559959U), (2178204204U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32429))))))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_13 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */int) min((var_6), ((signed char)-17)))) - (((/* implicit */int) max(((signed char)8), (arr_2 [i_0])))))) > (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) (unsigned short)11608)) : (((/* implicit */int) arr_12 [i_0]))))));
            var_16 -= ((/* implicit */unsigned int) (signed char)19);
        }
    }
    for (short i_3 = 4; i_3 < 12; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */long long int) arr_15 [i_3] [i_3 - 3]);
        arr_17 [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3]))) & (max((((/* implicit */unsigned long long int) arr_14 [i_3 - 2])), (0ULL)))));
        var_17 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_14 [(_Bool)1])), (((((/* implicit */unsigned int) ((/* implicit */int) (short)32429))) % (((unsigned int) var_10))))));
    }
}
