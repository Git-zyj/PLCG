/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210681
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
    var_17 = ((/* implicit */short) (+(((((/* implicit */long long int) (~(var_9)))) | ((~(var_13)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */int) (!(((((10838614810567703765ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_2] [16ULL] [i_1] [(signed char)8]))))) == (((/* implicit */unsigned long long int) (+(arr_2 [i_0]))))))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((+((+(arr_6 [(_Bool)1] [i_1] [i_3]))))) < (((/* implicit */long long int) ((((arr_2 [i_3]) / (((/* implicit */int) (signed char)-30)))) >> (((/* implicit */int) ((arr_1 [i_1]) == (((/* implicit */unsigned int) arr_2 [i_1])))))))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */long long int) (((((~(arr_8 [i_0] [i_0] [i_0] [i_0]))) << ((((-(((/* implicit */int) var_0)))) - (1196))))) / ((((-(((/* implicit */int) arr_7 [15LL] [15LL] [i_0])))) | (((((/* implicit */int) (unsigned char)105)) << (((arr_10 [i_0] [13] [(unsigned short)9] [i_0]) - (8704705116051305701LL)))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */unsigned int) (+((~(18ULL)))));
        var_21 = ((/* implicit */unsigned short) (+((+(arr_12 [i_4])))));
    }
    var_22 = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) (unsigned char)115))))))));
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((-8382983544121544196LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))))))));
    var_24 = ((/* implicit */long long int) (((((~(((/* implicit */int) var_0)))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (var_16))) - (2904498238U))))) > (((((/* implicit */int) ((((/* implicit */_Bool) 16383U)) || (var_6)))) >> ((((~(var_2))) + (1651574124)))))));
}
