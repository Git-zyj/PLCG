/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249992
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
    var_17 &= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (_Bool)1)), (var_7)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((arr_0 [i_0]), (arr_0 [i_0]))), (((/* implicit */long long int) ((arr_0 [i_0 - 1]) == (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) || (((/* implicit */_Bool) ((arr_0 [i_0]) ^ (max((arr_0 [(unsigned short)18]), (-2843185477555288418LL))))))));
        var_19 = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_1 [i_0])) % (1996442141))))) && (((arr_0 [i_0]) <= ((~(arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            var_20 = ((1996442162) <= ((~(((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1])) != (((/* implicit */int) arr_1 [i_0 - 1]))))))));
            arr_4 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) -1996442142)) && (((/* implicit */_Bool) -1996442137))))), ((unsigned short)9188)))) - (((/* implicit */int) ((_Bool) ((arr_0 [i_0]) << (((((/* implicit */int) arr_1 [i_0])) - (19618)))))))));
        }
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) 1ULL);
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (long long int i_4 = 4; i_4 < 9; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_21 ^= ((long long int) arr_10 [i_4]);
                        var_22 ^= ((/* implicit */signed char) var_11);
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((/* implicit */int) (((+(1996442142))) == ((~(((/* implicit */int) var_11))))))))))));
    var_24 = ((/* implicit */_Bool) ((unsigned short) var_14));
}
