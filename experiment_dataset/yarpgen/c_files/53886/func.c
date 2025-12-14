/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53886
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((((/* implicit */int) (short)(-32767 - 1))), (888952868)));
        var_20 = ((/* implicit */short) ((((/* implicit */int) (short)-32767)) ^ (((/* implicit */int) (unsigned char)0))));
        var_21 = (((-(((/* implicit */int) (_Bool)1)))) * ((-(-10))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2437485985372318646LL)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12)))));
                        var_23 |= min((((/* implicit */int) ((((/* implicit */int) (unsigned char)12)) >= (1688050885)))), ((-2147483647 - 1)));
                        var_24 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -10)), (0ULL)))) || (((/* implicit */_Bool) 10ULL)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            var_25 &= ((/* implicit */long long int) ((((18150012387845219611ULL) < (((/* implicit */unsigned long long int) -958129260)))) ? ((-(201171240U))) : (((((/* implicit */unsigned int) -958129292)) + (3674278578U)))));
            arr_13 [(unsigned char)6] &= ((/* implicit */_Bool) ((unsigned long long int) (short)(-32767 - 1)));
        }
    }
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_26 = ((/* implicit */short) ((unsigned char) var_13));
                        arr_27 [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-30441)) ? (-958129240) : (-1812777432)));
                        arr_28 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)0), ((unsigned char)44)))) ? (((/* implicit */int) (short)-32767)) : (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14454))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_5]);
    }
    var_28 -= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)10))));
}
