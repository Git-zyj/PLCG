/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234948
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
    var_13 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_11)))) ? (((((/* implicit */_Bool) 536870400U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) -1659450150)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (12535391245760365183ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 137438953472ULL)) ? (var_9) : (((/* implicit */long long int) max((3758096896U), (((/* implicit */unsigned int) var_6)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = min((((/* implicit */unsigned long long int) var_7)), ((-(((((/* implicit */_Bool) 536870421U)) ? (1594153738684377487ULL) : (((/* implicit */unsigned long long int) 3758096892U)))))));
                var_14 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [9ULL])))) ? (536870387U) : (3758096896U)));
                arr_7 [i_0] [5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)133)) ? (((((((/* implicit */_Bool) arr_4 [(unsigned char)9])) ? (10762938803141682558ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)151)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_15 = ((/* implicit */unsigned char) arr_3 [i_0]);
            }
        } 
    } 
}
