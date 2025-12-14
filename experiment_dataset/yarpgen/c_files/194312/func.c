/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194312
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
    var_13 = ((4524532977125837620ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)-27)) - (((/* implicit */int) (unsigned short)49989))))))));
    var_14 |= ((/* implicit */long long int) ((min((max((((/* implicit */unsigned long long int) var_8)), (4850378470395821327ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))) >= (((unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 4850378470395821303ULL)) ? (4850378470395821339ULL) : (((/* implicit */unsigned long long int) 60U))));
                arr_5 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) arr_1 [i_0] [i_1 - 2])) <= (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0 + 2] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), ((_Bool)1)));
            }
        } 
    } 
    var_15 *= ((/* implicit */long long int) ((((((((/* implicit */int) var_9)) * (((/* implicit */int) var_8)))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (-1)))))) >> (((-1002582285416762580LL) + (1002582285416762602LL)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 3) /* same iter space */
    {
        arr_9 [11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15534))) - (4850378470395821322ULL)));
        var_16 += arr_7 [i_2 - 1] [i_2 - 2];
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (signed char i_4 = 2; i_4 < 20; i_4 += 3) 
            {
                {
                    var_17 = max((((/* implicit */long long int) var_10)), (arr_12 [i_2 - 3] [i_2 - 4] [i_2 - 2]));
                    arr_15 [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (arr_2 [i_2] [i_3] [i_2 + 3]) : (arr_2 [4ULL] [i_3] [i_2 - 3]))) > (((/* implicit */int) (!(var_9))))));
                    var_18 += ((/* implicit */_Bool) ((arr_13 [16U] [i_4] [i_4 - 1]) + (var_5)));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((((/* implicit */int) (!((_Bool)1)))), ((-(((/* implicit */int) (_Bool)1)))))))))));
        var_20 = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
    }
}
