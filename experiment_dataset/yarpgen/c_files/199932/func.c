/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199932
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)41)), (141500172756900456ULL)));
                        arr_11 [i_0] [i_3] [i_1] = ((-3267283562290194523LL) != (-3267283562290194518LL));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_6)))) ? (0) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)12)) : (1560321565)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))) : (-6LL)))) * (min((((/* implicit */unsigned long long int) (_Bool)1)), (17919377668564879631ULL))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1487858490U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 2] [i_1] [i_2] [i_4] [i_4] [i_2]))))))))));
                        arr_15 [i_0] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */long long int) (+((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [10ULL] [10ULL] [i_2] [i_4])) : (((/* implicit */int) arr_3 [i_1] [i_1] [(signed char)16]))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_5] [i_1] [i_2] [i_2] [i_1] [(unsigned char)20] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_8 [i_1] [i_1] [i_2] [i_2] [i_1] [i_0]), (arr_8 [i_0 - 1] [i_1] [i_0] [i_0 - 2] [i_1] [i_0])))) ^ (((/* implicit */int) max((var_0), (((/* implicit */short) arr_8 [i_2] [i_1] [i_2] [i_2] [(signed char)1] [(short)12])))))));
                        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50461)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_3), (arr_4 [(unsigned short)10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((~(4101865557U)))))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (16570524562778258287ULL))))))));
                        var_11 ^= ((/* implicit */short) (+(var_3)));
                        arr_20 [i_0] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((611799243508128019ULL) << (0))) : (((/* implicit */unsigned long long int) (-(-1193199808)))))), (min((arr_6 [i_0 + 1] [i_0 - 2]), (((/* implicit */unsigned long long int) var_1))))));
                        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (signed char)30))));
                    }
                    arr_21 [i_0] [(_Bool)0] [i_0] [i_0 - 2] |= ((/* implicit */unsigned short) (~(arr_0 [i_0 + 1])));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) ((min((max((193101744U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) var_7)))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
}
