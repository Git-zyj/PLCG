/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201149
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-3602)), (4866759322325107294LL)))) || (((/* implicit */_Bool) (unsigned char)0))));
    var_11 = ((/* implicit */short) 466672645);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) (unsigned char)10);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_3] [i_2] [1U] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4113181787806262715ULL)) ? (14333562285903288928ULL) : (14333562285903288901ULL))) * (((/* implicit */unsigned long long int) arr_7 [i_0 + 2]))));
                        var_12 = ((/* implicit */unsigned char) arr_6 [i_1]);
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3602)) ? (11019132321137038725ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11019132321137038725ULL)) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))) && ((_Bool)1)));
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((7427611752572512895ULL) * (((/* implicit */unsigned long long int) 2097151)))))) ? (((((((/* implicit */_Bool) 4657459640292472516LL)) ? (11019132321137038734ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22887))) | (15802048893924173607ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 509203763303457899ULL)) ? (((/* implicit */int) (_Bool)1)) : (((int) 2565808246418187435LL)))))));
        arr_17 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4] [8ULL])) ? (((int) -3818432364599359144LL)) : (((arr_2 [i_4]) / (16777216)))))) ? (min((((/* implicit */unsigned long long int) 2082426379U)), (arr_4 [i_4] [i_4]))) : (14333562285903288908ULL)));
        arr_18 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 3215343466U)) ? (((/* implicit */int) arr_5 [i_4])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4438947978547166733LL)) ? (arr_6 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83)))))) ? (-2147483619) : (((((/* implicit */_Bool) 328563948U)) ? (((/* implicit */int) (unsigned short)22887)) : (-1525097393)))))));
    }
}
