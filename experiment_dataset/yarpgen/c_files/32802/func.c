/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32802
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
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) var_4)), ((~((~(((/* implicit */int) (short)-26293))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) 2120933068);
        arr_3 [8U] = ((/* implicit */signed char) ((((int) (unsigned short)50217)) > (((((/* implicit */_Bool) (short)-25649)) ? (((/* implicit */int) (short)-32763)) : ((-2147483647 - 1))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_18 |= max(((short)-32756), (((/* implicit */short) (_Bool)1)));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    arr_13 [i_3] [(_Bool)1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((var_0) + (var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) : (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (signed char)-30))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)40078)) : (((/* implicit */int) (short)32761))))) : (var_2)))));
                    var_19 = ((/* implicit */unsigned int) var_11);
                    var_20 ^= ((/* implicit */unsigned int) ((max((-1882295520), (((/* implicit */int) (short)-32763)))) / (((int) var_0))));
                }
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (unsigned char)127);
                                var_22 -= ((/* implicit */int) max((((/* implicit */unsigned int) min((((/* implicit */int) (short)32486)), (((((/* implicit */_Bool) 14U)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (unsigned short)25458))))))), (max((4294967295U), (((/* implicit */unsigned int) (-(1927889604))))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-32508)) : (((/* implicit */int) (short)32459))));
                                arr_21 [8LL] [3ULL] [(unsigned char)5] [8LL] [8LL] [i_1] [i_1] = ((/* implicit */_Bool) 1532431021U);
                                arr_22 [i_2] [i_2] = ((/* implicit */short) (signed char)-48);
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (0LL) : (1LL)))) || (((/* implicit */_Bool) var_8))))), (max(((unsigned char)194), ((unsigned char)180)))));
            }
        } 
    } 
    var_25 = ((unsigned int) (unsigned char)91);
    var_26 = ((/* implicit */int) max((min((min((0LL), (-17LL))), (((/* implicit */long long int) (unsigned char)180)))), (max((((/* implicit */long long int) max((var_10), (((/* implicit */unsigned char) var_1))))), (max((0LL), (((/* implicit */long long int) 3701398054U))))))));
}
