/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234301
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (_Bool)0))));
    var_18 += ((/* implicit */signed char) (((+(((/* implicit */int) (short)(-32767 - 1))))) < ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((min((var_4), (var_12))) + (2641288143889648474LL)))))));
    var_19 = ((/* implicit */unsigned long long int) min((var_3), (var_10)));
    var_20 &= ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) (+(min((arr_1 [i_0 - 2] [i_0 - 2]), (((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [i_0])))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned long long int) ((unsigned int) ((signed char) -309851279)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 4; i_2 < 19; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_10 [i_2 - 4] [i_3] [i_1] [i_2 - 4] = ((/* implicit */long long int) ((((long long int) ((unsigned long long int) -309851261))) >= (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_9 [i_1] [i_1 + 3] [i_2 - 4] [i_2 + 4])), (var_13))))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 309851260)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61093))) ^ (4278190080U))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */short) arr_2 [i_2] [i_1]);
                                var_25 = ((/* implicit */long long int) ((max((var_1), (((arr_5 [i_1]) == (((/* implicit */int) arr_6 [i_2] [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_6))))))) : (((((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_9 [i_1] [i_3] [i_4] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)31571)))) : (max((((/* implicit */unsigned long long int) (signed char)-10)), (17944949063527167579ULL)))))));
                                arr_17 [i_1] [i_2] [i_1] [i_4] [i_5 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_3)), (var_16)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)32), ((unsigned char)214))))))) : (((((/* implicit */int) (_Bool)0)) >> (((((arr_16 [i_2 + 2] [i_4] [i_3] [i_2 + 4] [i_2 + 2] [i_2] [i_1]) << (((((/* implicit */int) var_6)) - (52682))))) - (1766980714U)))))));
                                arr_18 [i_1] [i_5] [i_4] [(_Bool)1] [i_2] [i_1] = ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_1] [i_1 + 3] [i_1 + 3])), (var_14)))) : (((/* implicit */int) ((signed char) arr_16 [i_1] [14U] [14U] [i_1] [i_1] [i_1 + 1] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1])) >= (((/* implicit */int) (_Bool)1))))) : (arr_13 [i_1 + 3] [i_1 - 1])))));
        /* LoopNest 3 */
        for (long long int i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (short i_8 = 2; i_8 < 21; i_8 += 4) 
                {
                    {
                        arr_27 [i_8 - 2] [i_1] [i_1] [i_6] [i_1] [i_1 + 2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_16) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((unsigned int) arr_2 [i_1] [i_1]))) : ((~(var_4))))), (((/* implicit */long long int) ((int) (-(arr_11 [i_1] [i_6] [i_7] [i_8])))))));
                        var_26 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_8]))));
                    }
                } 
            } 
        } 
    }
}
