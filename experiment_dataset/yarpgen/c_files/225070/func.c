/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225070
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */short) ((_Bool) -3614247132398592057LL));
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (2125988327)))) : (((int) 3614247132398592059LL))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) var_1))))));
                    var_13 += ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -3614247132398592057LL))))), (((unsigned short) 0LL))));
                    arr_10 [i_1] [i_1] [i_2 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (signed char)96))));
                }
            } 
        } 
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(((((/* implicit */int) ((unsigned char) var_11))) - (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]))))))))));
        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((long long int) (short)0));
        var_15 = ((/* implicit */unsigned short) var_6);
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) ((long long int) ((_Bool) 16384U)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                var_16 *= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (signed char)-89))) & (-2125988327)));
                arr_22 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_5] [i_4])) ? (-2092756307) : (((/* implicit */int) ((unsigned short) (-2147483647 - 1))))));
            }
            arr_23 [i_3] |= ((/* implicit */_Bool) ((long long int) arr_15 [i_3]));
            arr_24 [i_4] [i_3] = ((/* implicit */unsigned short) ((((_Bool) (signed char)-97)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (13532405619082393054ULL)));
        }
    }
    var_17 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) 0)) ? (524224) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
    var_18 |= (~(((/* implicit */int) var_1)));
    var_19 = min((var_0), (((((/* implicit */_Bool) (+(13532405619082393054ULL)))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (8386560))))));
}
